; Auto-generated. Do not edit!


(cl:in-package gesture-msg)


;//! \htmlinclude HandPos.msg.html

(cl:defclass <HandPos> (roslisp-msg-protocol:ros-message)
  ((left_position
    :reader left_position
    :initarg :left_position
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (right_position
    :reader right_position
    :initarg :right_position
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (left_click
    :reader left_click
    :initarg :left_click
    :type cl:boolean
    :initform cl:nil)
   (right_click
    :reader right_click
    :initarg :right_click
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass HandPos (<HandPos>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <HandPos>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'HandPos)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name gesture-msg:<HandPos> is deprecated: use gesture-msg:HandPos instead.")))

(cl:ensure-generic-function 'left_position-val :lambda-list '(m))
(cl:defmethod left_position-val ((m <HandPos>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:left_position-val is deprecated.  Use gesture-msg:left_position instead.")
  (left_position m))

(cl:ensure-generic-function 'right_position-val :lambda-list '(m))
(cl:defmethod right_position-val ((m <HandPos>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:right_position-val is deprecated.  Use gesture-msg:right_position instead.")
  (right_position m))

(cl:ensure-generic-function 'left_click-val :lambda-list '(m))
(cl:defmethod left_click-val ((m <HandPos>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:left_click-val is deprecated.  Use gesture-msg:left_click instead.")
  (left_click m))

(cl:ensure-generic-function 'right_click-val :lambda-list '(m))
(cl:defmethod right_click-val ((m <HandPos>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:right_click-val is deprecated.  Use gesture-msg:right_click instead.")
  (right_click m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <HandPos>) ostream)
  "Serializes a message object of type '<HandPos>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_position) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_position) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'left_click) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'right_click) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <HandPos>) istream)
  "Deserializes a message object of type '<HandPos>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_position) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_position) istream)
    (cl:setf (cl:slot-value msg 'left_click) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'right_click) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<HandPos>)))
  "Returns string type for a message object of type '<HandPos>"
  "gesture/HandPos")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'HandPos)))
  "Returns string type for a message object of type 'HandPos"
  "gesture/HandPos")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<HandPos>)))
  "Returns md5sum for a message object of type '<HandPos>"
  "33cd725b752112008f3a4635435ee4fb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'HandPos)))
  "Returns md5sum for a message object of type 'HandPos"
  "33cd725b752112008f3a4635435ee4fb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<HandPos>)))
  "Returns full string definition for message of type '<HandPos>"
  (cl:format cl:nil "geometry_msgs/Point left_position~%geometry_msgs/Point right_position~%bool left_click~%bool right_click~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'HandPos)))
  "Returns full string definition for message of type 'HandPos"
  (cl:format cl:nil "geometry_msgs/Point left_position~%geometry_msgs/Point right_position~%bool left_click~%bool right_click~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <HandPos>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_position))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_position))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <HandPos>))
  "Converts a ROS message object to a list"
  (cl:list 'HandPos
    (cl:cons ':left_position (left_position msg))
    (cl:cons ':right_position (right_position msg))
    (cl:cons ':left_click (left_click msg))
    (cl:cons ':right_click (right_click msg))
))
