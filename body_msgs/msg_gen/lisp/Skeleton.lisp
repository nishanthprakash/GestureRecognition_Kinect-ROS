; Auto-generated. Do not edit!


(cl:in-package body_msgs-msg)


;//! \htmlinclude Skeleton.msg.html

(cl:defclass <Skeleton> (roslisp-msg-protocol:ros-message)
  ((playerid
    :reader playerid
    :initarg :playerid
    :type cl:integer
    :initform 0)
   (head
    :reader head
    :initarg :head
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (neck
    :reader neck
    :initarg :neck
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_hand
    :reader right_hand
    :initarg :right_hand
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_hand
    :reader left_hand
    :initarg :left_hand
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_shoulder
    :reader right_shoulder
    :initarg :right_shoulder
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_shoulder
    :reader left_shoulder
    :initarg :left_shoulder
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_elbow
    :reader right_elbow
    :initarg :right_elbow
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_elbow
    :reader left_elbow
    :initarg :left_elbow
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (torso
    :reader torso
    :initarg :torso
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_hip
    :reader left_hip
    :initarg :left_hip
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_hip
    :reader right_hip
    :initarg :right_hip
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_knee
    :reader left_knee
    :initarg :left_knee
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_knee
    :reader right_knee
    :initarg :right_knee
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (left_foot
    :reader left_foot
    :initarg :left_foot
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint))
   (right_foot
    :reader right_foot
    :initarg :right_foot
    :type body_msgs-msg:SkeletonJoint
    :initform (cl:make-instance 'body_msgs-msg:SkeletonJoint)))
)

(cl:defclass Skeleton (<Skeleton>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Skeleton>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Skeleton)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name body_msgs-msg:<Skeleton> is deprecated: use body_msgs-msg:Skeleton instead.")))

(cl:ensure-generic-function 'playerid-val :lambda-list '(m))
(cl:defmethod playerid-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:playerid-val is deprecated.  Use body_msgs-msg:playerid instead.")
  (playerid m))

(cl:ensure-generic-function 'head-val :lambda-list '(m))
(cl:defmethod head-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:head-val is deprecated.  Use body_msgs-msg:head instead.")
  (head m))

(cl:ensure-generic-function 'neck-val :lambda-list '(m))
(cl:defmethod neck-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:neck-val is deprecated.  Use body_msgs-msg:neck instead.")
  (neck m))

(cl:ensure-generic-function 'right_hand-val :lambda-list '(m))
(cl:defmethod right_hand-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_hand-val is deprecated.  Use body_msgs-msg:right_hand instead.")
  (right_hand m))

(cl:ensure-generic-function 'left_hand-val :lambda-list '(m))
(cl:defmethod left_hand-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_hand-val is deprecated.  Use body_msgs-msg:left_hand instead.")
  (left_hand m))

(cl:ensure-generic-function 'right_shoulder-val :lambda-list '(m))
(cl:defmethod right_shoulder-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_shoulder-val is deprecated.  Use body_msgs-msg:right_shoulder instead.")
  (right_shoulder m))

(cl:ensure-generic-function 'left_shoulder-val :lambda-list '(m))
(cl:defmethod left_shoulder-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_shoulder-val is deprecated.  Use body_msgs-msg:left_shoulder instead.")
  (left_shoulder m))

(cl:ensure-generic-function 'right_elbow-val :lambda-list '(m))
(cl:defmethod right_elbow-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_elbow-val is deprecated.  Use body_msgs-msg:right_elbow instead.")
  (right_elbow m))

(cl:ensure-generic-function 'left_elbow-val :lambda-list '(m))
(cl:defmethod left_elbow-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_elbow-val is deprecated.  Use body_msgs-msg:left_elbow instead.")
  (left_elbow m))

(cl:ensure-generic-function 'torso-val :lambda-list '(m))
(cl:defmethod torso-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:torso-val is deprecated.  Use body_msgs-msg:torso instead.")
  (torso m))

(cl:ensure-generic-function 'left_hip-val :lambda-list '(m))
(cl:defmethod left_hip-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_hip-val is deprecated.  Use body_msgs-msg:left_hip instead.")
  (left_hip m))

(cl:ensure-generic-function 'right_hip-val :lambda-list '(m))
(cl:defmethod right_hip-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_hip-val is deprecated.  Use body_msgs-msg:right_hip instead.")
  (right_hip m))

(cl:ensure-generic-function 'left_knee-val :lambda-list '(m))
(cl:defmethod left_knee-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_knee-val is deprecated.  Use body_msgs-msg:left_knee instead.")
  (left_knee m))

(cl:ensure-generic-function 'right_knee-val :lambda-list '(m))
(cl:defmethod right_knee-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_knee-val is deprecated.  Use body_msgs-msg:right_knee instead.")
  (right_knee m))

(cl:ensure-generic-function 'left_foot-val :lambda-list '(m))
(cl:defmethod left_foot-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:left_foot-val is deprecated.  Use body_msgs-msg:left_foot instead.")
  (left_foot m))

(cl:ensure-generic-function 'right_foot-val :lambda-list '(m))
(cl:defmethod right_foot-val ((m <Skeleton>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader body_msgs-msg:right_foot-val is deprecated.  Use body_msgs-msg:right_foot instead.")
  (right_foot m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Skeleton>) ostream)
  "Serializes a message object of type '<Skeleton>"
  (cl:let* ((signed (cl:slot-value msg 'playerid)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'head) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'neck) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_hand) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_hand) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_shoulder) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_shoulder) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_elbow) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_elbow) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'torso) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_hip) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_hip) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_knee) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_knee) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_foot) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_foot) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Skeleton>) istream)
  "Deserializes a message object of type '<Skeleton>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'playerid) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'head) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'neck) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_hand) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_hand) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_shoulder) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_shoulder) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_elbow) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_elbow) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'torso) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_hip) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_hip) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_knee) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_knee) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_foot) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_foot) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Skeleton>)))
  "Returns string type for a message object of type '<Skeleton>"
  "body_msgs/Skeleton")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Skeleton)))
  "Returns string type for a message object of type 'Skeleton"
  "body_msgs/Skeleton")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Skeleton>)))
  "Returns md5sum for a message object of type '<Skeleton>"
  "0c41aa8101907706f9e2c5e6f1a31dfd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Skeleton)))
  "Returns md5sum for a message object of type 'Skeleton"
  "0c41aa8101907706f9e2c5e6f1a31dfd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Skeleton>)))
  "Returns full string definition for message of type '<Skeleton>"
  (cl:format cl:nil "int32 playerid~%body_msgs/SkeletonJoint head~%body_msgs/SkeletonJoint neck~%body_msgs/SkeletonJoint right_hand~%body_msgs/SkeletonJoint left_hand~%body_msgs/SkeletonJoint right_shoulder~%body_msgs/SkeletonJoint left_shoulder~%body_msgs/SkeletonJoint right_elbow~%body_msgs/SkeletonJoint left_elbow~%body_msgs/SkeletonJoint torso~%body_msgs/SkeletonJoint left_hip~%body_msgs/SkeletonJoint right_hip~%body_msgs/SkeletonJoint left_knee~%body_msgs/SkeletonJoint right_knee~%body_msgs/SkeletonJoint left_foot~%body_msgs/SkeletonJoint right_foot~%~%================================================================================~%MSG: body_msgs/SkeletonJoint~%geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Skeleton)))
  "Returns full string definition for message of type 'Skeleton"
  (cl:format cl:nil "int32 playerid~%body_msgs/SkeletonJoint head~%body_msgs/SkeletonJoint neck~%body_msgs/SkeletonJoint right_hand~%body_msgs/SkeletonJoint left_hand~%body_msgs/SkeletonJoint right_shoulder~%body_msgs/SkeletonJoint left_shoulder~%body_msgs/SkeletonJoint right_elbow~%body_msgs/SkeletonJoint left_elbow~%body_msgs/SkeletonJoint torso~%body_msgs/SkeletonJoint left_hip~%body_msgs/SkeletonJoint right_hip~%body_msgs/SkeletonJoint left_knee~%body_msgs/SkeletonJoint right_knee~%body_msgs/SkeletonJoint left_foot~%body_msgs/SkeletonJoint right_foot~%~%================================================================================~%MSG: body_msgs/SkeletonJoint~%geometry_msgs/Point position~%float32 confidence~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Skeleton>))
  (cl:+ 0
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'head))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'neck))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_hand))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_hand))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_shoulder))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_shoulder))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_elbow))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_elbow))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'torso))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_hip))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_hip))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_knee))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_knee))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_foot))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_foot))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Skeleton>))
  "Converts a ROS message object to a list"
  (cl:list 'Skeleton
    (cl:cons ':playerid (playerid msg))
    (cl:cons ':head (head msg))
    (cl:cons ':neck (neck msg))
    (cl:cons ':right_hand (right_hand msg))
    (cl:cons ':left_hand (left_hand msg))
    (cl:cons ':right_shoulder (right_shoulder msg))
    (cl:cons ':left_shoulder (left_shoulder msg))
    (cl:cons ':right_elbow (right_elbow msg))
    (cl:cons ':left_elbow (left_elbow msg))
    (cl:cons ':torso (torso msg))
    (cl:cons ':left_hip (left_hip msg))
    (cl:cons ':right_hip (right_hip msg))
    (cl:cons ':left_knee (left_knee msg))
    (cl:cons ':right_knee (right_knee msg))
    (cl:cons ':left_foot (left_foot msg))
    (cl:cons ':right_foot (right_foot msg))
))
