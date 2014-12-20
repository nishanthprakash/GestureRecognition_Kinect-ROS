; Auto-generated. Do not edit!


(cl:in-package body_msgs-msg)


;//! \htmlinclude Skeletons.msg.html

(cl:defclass <Skeletons> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (skeletons
    :reader skeletons
    :initarg :skeletons
    :type (cl:vector body_msgs-msg:Skeleton)
   :initform (cl:make-array 0 :element-type 'body_msgs-msg:Skeleton :initial-element (cl:make-instance 'body_msgs-msg:Skeleton))))
)

(cl:defclass Skeletons (<Skeletons>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Skeletons>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Skeletons)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name body_msgs-msg:<Skeletons> is deprecated: use body_msgs-msg:Skeletons instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Skeletons>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:header-val is deprecated.  Use body_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'skeletons-val :lambda-list '(m))
(cl:defmethod skeletons-val ((m <Skeletons>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:skeletons-val is deprecated.  Use body_msgs-msg:skeletons instead.")
  (skeletons m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Skeletons>) ostream)
  "Serializes a message object of type '<Skeletons>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'skeletons))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'skeletons))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Skeletons>) istream)
  "Deserializes a message object of type '<Skeletons>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'skeletons) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'skeletons)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'body_msgs-msg:Skeleton))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Skeletons>)))
  "Returns string type for a message object of type '<Skeletons>"
  "body_msgs/Skeletons")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Skeletons)))
  "Returns string type for a message object of type 'Skeletons"
  "body_msgs/Skeletons")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Skeletons>)))
  "Returns md5sum for a message object of type '<Skeletons>"
  "8d6667331403917cc53d8d820001e6f9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Skeletons)))
  "Returns md5sum for a message object of type 'Skeletons"
  "8d6667331403917cc53d8d820001e6f9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Skeletons>)))
  "Returns full string definition for message of type '<Skeletons>"
  (cl:format cl:nil "Header header~%body_msgs/Skeleton[] skeletons~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: body_msgs/Skeleton~%int32 playerid~%body_msgs/SkeletonJoint head~%body_msgs/SkeletonJoint neck~%body_msgs/SkeletonJoint right_hand~%body_msgs/SkeletonJoint left_hand~%body_msgs/SkeletonJoint right_shoulder~%body_msgs/SkeletonJoint left_shoulder~%body_msgs/SkeletonJoint right_elbow~%body_msgs/SkeletonJoint left_elbow~%body_msgs/SkeletonJoint torso~%body_msgs/SkeletonJoint left_hip~%body_msgs/SkeletonJoint right_hip~%body_msgs/SkeletonJoint left_knee~%body_msgs/SkeletonJoint right_knee~%body_msgs/SkeletonJoint left_foot~%body_msgs/SkeletonJoint right_foot~%~%================================================================================~%MSG: body_msgs/SkeletonJoint~%geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Skeletons)))
  "Returns full string definition for message of type 'Skeletons"
  (cl:format cl:nil "Header header~%body_msgs/Skeleton[] skeletons~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: body_msgs/Skeleton~%int32 playerid~%body_msgs/SkeletonJoint head~%body_msgs/SkeletonJoint neck~%body_msgs/SkeletonJoint right_hand~%body_msgs/SkeletonJoint left_hand~%body_msgs/SkeletonJoint right_shoulder~%body_msgs/SkeletonJoint left_shoulder~%body_msgs/SkeletonJoint right_elbow~%body_msgs/SkeletonJoint left_elbow~%body_msgs/SkeletonJoint torso~%body_msgs/SkeletonJoint left_hip~%body_msgs/SkeletonJoint right_hip~%body_msgs/SkeletonJoint left_knee~%body_msgs/SkeletonJoint right_knee~%body_msgs/SkeletonJoint left_foot~%body_msgs/SkeletonJoint right_foot~%~%================================================================================~%MSG: body_msgs/SkeletonJoint~%geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Skeletons>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'skeletons) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Skeletons>))
  "Converts a ROS message object to a list"
  (cl:list 'Skeletons
    (cl:cons ':header (header msg))
    (cl:cons ':skeletons (skeletons msg))
))
