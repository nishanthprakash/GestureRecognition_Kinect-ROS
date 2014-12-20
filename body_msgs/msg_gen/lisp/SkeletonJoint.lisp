; Auto-generated. Do not edit!


(cl:in-package body_msgs-msg)


;//! \htmlinclude SkeletonJoint.msg.html

(cl:defclass <SkeletonJoint> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (confidence
    :reader confidence
    :initarg :confidence
    :type cl:float
    :initform 0.0))
)

(cl:defclass SkeletonJoint (<SkeletonJoint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SkeletonJoint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SkeletonJoint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name body_msgs-msg:<SkeletonJoint> is deprecated: use body_msgs-msg:SkeletonJoint instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <SkeletonJoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:position-val is deprecated.  Use body_msgs-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'confidence-val :lambda-list '(m))
(cl:defmethod confidence-val ((m <SkeletonJoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:confidence-val is deprecated.  Use body_msgs-msg:confidence instead.")
  (confidence m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SkeletonJoint>) ostream)
  "Serializes a message object of type '<SkeletonJoint>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'position) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'confidence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SkeletonJoint>) istream)
  "Deserializes a message object of type '<SkeletonJoint>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'position) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'confidence) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SkeletonJoint>)))
  "Returns string type for a message object of type '<SkeletonJoint>"
  "body_msgs/SkeletonJoint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SkeletonJoint)))
  "Returns string type for a message object of type 'SkeletonJoint"
  "body_msgs/SkeletonJoint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SkeletonJoint>)))
  "Returns md5sum for a message object of type '<SkeletonJoint>"
  "8000af3463f92157ee303c820e3b02c6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SkeletonJoint)))
  "Returns md5sum for a message object of type 'SkeletonJoint"
  "8000af3463f92157ee303c820e3b02c6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SkeletonJoint>)))
  "Returns full string definition for message of type '<SkeletonJoint>"
  (cl:format cl:nil "geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SkeletonJoint)))
  "Returns full string definition for message of type 'SkeletonJoint"
  (cl:format cl:nil "geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SkeletonJoint>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'position))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SkeletonJoint>))
  "Converts a ROS message object to a list"
  (cl:list 'SkeletonJoint
    (cl:cons ':position (position msg))
    (cl:cons ':confidence (confidence msg))
))
