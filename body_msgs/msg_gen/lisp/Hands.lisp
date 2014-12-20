; Auto-generated. Do not edit!


(cl:in-package body_msgs-msg)


;//! \htmlinclude Hands.msg.html

(cl:defclass <Hands> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (hands
    :reader hands
    :initarg :hands
    :type (cl:vector body_msgs-msg:Hand)
   :initform (cl:make-array 0 :element-type 'body_msgs-msg:Hand :initial-element (cl:make-instance 'body_msgs-msg:Hand))))
)

(cl:defclass Hands (<Hands>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Hands>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Hands)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name body_msgs-msg:<Hands> is deprecated: use body_msgs-msg:Hands instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Hands>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:header-val is deprecated.  Use body_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'hands-val :lambda-list '(m))
(cl:defmethod hands-val ((m <Hands>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:hands-val is deprecated.  Use body_msgs-msg:hands instead.")
  (hands m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Hands>) ostream)
  "Serializes a message object of type '<Hands>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'hands))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'hands))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Hands>) istream)
  "Deserializes a message object of type '<Hands>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'hands) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'hands)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'body_msgs-msg:Hand))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Hands>)))
  "Returns string type for a message object of type '<Hands>"
  "body_msgs/Hands")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Hands)))
  "Returns string type for a message object of type 'Hands"
  "body_msgs/Hands")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Hands>)))
  "Returns md5sum for a message object of type '<Hands>"
  "a7c0ad4d5951381fcf2e9fdf1233819e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Hands)))
  "Returns md5sum for a message object of type 'Hands"
  "a7c0ad4d5951381fcf2e9fdf1233819e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Hands>)))
  "Returns full string definition for message of type '<Hands>"
  (cl:format cl:nil "Header header~%#if two hands are detected, if handedness is distinguished, left hand is first~%Hand[] hands~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: body_msgs/Hand~%time stamp~%int32 seq    # seq is used for tracking the hand - ~%			 # if the seq number is the same, you can assume that the hand is the same as previously seen~%int32 thumb~%bool left    # if this hand is the left hand~%geometry_msgs/Point arm~%geometry_msgs/Transform palm~%geometry_msgs/Point[] fingers~%sensor_msgs/PointCloud2 handcloud~%#Possibilities for state variable:~%# open - open palm, usually five fingers~%# grip - fingers curled forward~%# paddle -  fingers together and straight~%# fist   ~%string state~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Hands)))
  "Returns full string definition for message of type 'Hands"
  (cl:format cl:nil "Header header~%#if two hands are detected, if handedness is distinguished, left hand is first~%Hand[] hands~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: body_msgs/Hand~%time stamp~%int32 seq    # seq is used for tracking the hand - ~%			 # if the seq number is the same, you can assume that the hand is the same as previously seen~%int32 thumb~%bool left    # if this hand is the left hand~%geometry_msgs/Point arm~%geometry_msgs/Transform palm~%geometry_msgs/Point[] fingers~%sensor_msgs/PointCloud2 handcloud~%#Possibilities for state variable:~%# open - open palm, usually five fingers~%# grip - fingers curled forward~%# paddle -  fingers together and straight~%# fist   ~%string state~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Hands>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'hands) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Hands>))
  "Converts a ROS message object to a list"
  (cl:list 'Hands
    (cl:cons ':header (header msg))
    (cl:cons ':hands (hands msg))
))
