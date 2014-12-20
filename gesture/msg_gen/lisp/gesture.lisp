; Auto-generated. Do not edit!


(cl:in-package gesture-msg)


;//! \htmlinclude gesture.msg.html

(cl:defclass <gesture> (roslisp-msg-protocol:ros-message)
  ((gesture0
    :reader gesture0
    :initarg :gesture0
    :type cl:boolean
    :initform cl:nil)
   (gesture1
    :reader gesture1
    :initarg :gesture1
    :type cl:boolean
    :initform cl:nil)
   (gesture2
    :reader gesture2
    :initarg :gesture2
    :type cl:boolean
    :initform cl:nil)
   (gesture3
    :reader gesture3
    :initarg :gesture3
    :type cl:boolean
    :initform cl:nil)
   (gesture4
    :reader gesture4
    :initarg :gesture4
    :type cl:boolean
    :initform cl:nil)
   (gesture5
    :reader gesture5
    :initarg :gesture5
    :type cl:boolean
    :initform cl:nil)
   (gesture6
    :reader gesture6
    :initarg :gesture6
    :type cl:boolean
    :initform cl:nil)
   (gesture7
    :reader gesture7
    :initarg :gesture7
    :type cl:boolean
    :initform cl:nil)
   (gesture8
    :reader gesture8
    :initarg :gesture8
    :type cl:boolean
    :initform cl:nil)
   (gesture9
    :reader gesture9
    :initarg :gesture9
    :type cl:boolean
    :initform cl:nil)
   (gesture10
    :reader gesture10
    :initarg :gesture10
    :type cl:boolean
    :initform cl:nil)
   (gesture11
    :reader gesture11
    :initarg :gesture11
    :type cl:boolean
    :initform cl:nil)
   (gesture12
    :reader gesture12
    :initarg :gesture12
    :type cl:boolean
    :initform cl:nil)
   (gesture13
    :reader gesture13
    :initarg :gesture13
    :type cl:boolean
    :initform cl:nil)
   (gesture14
    :reader gesture14
    :initarg :gesture14
    :type cl:boolean
    :initform cl:nil)
   (gesture15
    :reader gesture15
    :initarg :gesture15
    :type cl:boolean
    :initform cl:nil)
   (gesture16
    :reader gesture16
    :initarg :gesture16
    :type cl:boolean
    :initform cl:nil)
   (gesture17
    :reader gesture17
    :initarg :gesture17
    :type cl:boolean
    :initform cl:nil)
   (gesture18
    :reader gesture18
    :initarg :gesture18
    :type cl:boolean
    :initform cl:nil)
   (gesture19
    :reader gesture19
    :initarg :gesture19
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass gesture (<gesture>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <gesture>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'gesture)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name gesture-msg:<gesture> is deprecated: use gesture-msg:gesture instead.")))

(cl:ensure-generic-function 'gesture0-val :lambda-list '(m))
(cl:defmethod gesture0-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture0-val is deprecated.  Use gesture-msg:gesture0 instead.")
  (gesture0 m))

(cl:ensure-generic-function 'gesture1-val :lambda-list '(m))
(cl:defmethod gesture1-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture1-val is deprecated.  Use gesture-msg:gesture1 instead.")
  (gesture1 m))

(cl:ensure-generic-function 'gesture2-val :lambda-list '(m))
(cl:defmethod gesture2-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture2-val is deprecated.  Use gesture-msg:gesture2 instead.")
  (gesture2 m))

(cl:ensure-generic-function 'gesture3-val :lambda-list '(m))
(cl:defmethod gesture3-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture3-val is deprecated.  Use gesture-msg:gesture3 instead.")
  (gesture3 m))

(cl:ensure-generic-function 'gesture4-val :lambda-list '(m))
(cl:defmethod gesture4-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture4-val is deprecated.  Use gesture-msg:gesture4 instead.")
  (gesture4 m))

(cl:ensure-generic-function 'gesture5-val :lambda-list '(m))
(cl:defmethod gesture5-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture5-val is deprecated.  Use gesture-msg:gesture5 instead.")
  (gesture5 m))

(cl:ensure-generic-function 'gesture6-val :lambda-list '(m))
(cl:defmethod gesture6-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture6-val is deprecated.  Use gesture-msg:gesture6 instead.")
  (gesture6 m))

(cl:ensure-generic-function 'gesture7-val :lambda-list '(m))
(cl:defmethod gesture7-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture7-val is deprecated.  Use gesture-msg:gesture7 instead.")
  (gesture7 m))

(cl:ensure-generic-function 'gesture8-val :lambda-list '(m))
(cl:defmethod gesture8-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture8-val is deprecated.  Use gesture-msg:gesture8 instead.")
  (gesture8 m))

(cl:ensure-generic-function 'gesture9-val :lambda-list '(m))
(cl:defmethod gesture9-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture9-val is deprecated.  Use gesture-msg:gesture9 instead.")
  (gesture9 m))

(cl:ensure-generic-function 'gesture10-val :lambda-list '(m))
(cl:defmethod gesture10-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture10-val is deprecated.  Use gesture-msg:gesture10 instead.")
  (gesture10 m))

(cl:ensure-generic-function 'gesture11-val :lambda-list '(m))
(cl:defmethod gesture11-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture11-val is deprecated.  Use gesture-msg:gesture11 instead.")
  (gesture11 m))

(cl:ensure-generic-function 'gesture12-val :lambda-list '(m))
(cl:defmethod gesture12-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture12-val is deprecated.  Use gesture-msg:gesture12 instead.")
  (gesture12 m))

(cl:ensure-generic-function 'gesture13-val :lambda-list '(m))
(cl:defmethod gesture13-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture13-val is deprecated.  Use gesture-msg:gesture13 instead.")
  (gesture13 m))

(cl:ensure-generic-function 'gesture14-val :lambda-list '(m))
(cl:defmethod gesture14-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture14-val is deprecated.  Use gesture-msg:gesture14 instead.")
  (gesture14 m))

(cl:ensure-generic-function 'gesture15-val :lambda-list '(m))
(cl:defmethod gesture15-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture15-val is deprecated.  Use gesture-msg:gesture15 instead.")
  (gesture15 m))

(cl:ensure-generic-function 'gesture16-val :lambda-list '(m))
(cl:defmethod gesture16-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture16-val is deprecated.  Use gesture-msg:gesture16 instead.")
  (gesture16 m))

(cl:ensure-generic-function 'gesture17-val :lambda-list '(m))
(cl:defmethod gesture17-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture17-val is deprecated.  Use gesture-msg:gesture17 instead.")
  (gesture17 m))

(cl:ensure-generic-function 'gesture18-val :lambda-list '(m))
(cl:defmethod gesture18-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture18-val is deprecated.  Use gesture-msg:gesture18 instead.")
  (gesture18 m))

(cl:ensure-generic-function 'gesture19-val :lambda-list '(m))
(cl:defmethod gesture19-val ((m <gesture>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gesture-msg:gesture19-val is deprecated.  Use gesture-msg:gesture19 instead.")
  (gesture19 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <gesture>) ostream)
  "Serializes a message object of type '<gesture>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture0) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture1) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture2) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture3) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture4) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture5) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture6) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture7) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture8) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture9) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture10) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture11) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture12) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture13) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture14) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture15) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture16) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture17) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture18) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gesture19) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <gesture>) istream)
  "Deserializes a message object of type '<gesture>"
    (cl:setf (cl:slot-value msg 'gesture0) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture1) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture2) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture3) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture4) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture5) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture6) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture7) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture8) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture9) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture10) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture11) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture12) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture13) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture14) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture15) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture16) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture17) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture18) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'gesture19) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<gesture>)))
  "Returns string type for a message object of type '<gesture>"
  "gesture/gesture")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'gesture)))
  "Returns string type for a message object of type 'gesture"
  "gesture/gesture")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<gesture>)))
  "Returns md5sum for a message object of type '<gesture>"
  "1f0892595472edf00f67d006e6b907ed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'gesture)))
  "Returns md5sum for a message object of type 'gesture"
  "1f0892595472edf00f67d006e6b907ed")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<gesture>)))
  "Returns full string definition for message of type '<gesture>"
  (cl:format cl:nil "bool gesture0~%bool gesture1~%bool gesture2~%bool gesture3~%bool gesture4~%bool gesture5~%bool gesture6~%bool gesture7~%bool gesture8~%bool gesture9~%bool gesture10~%bool gesture11~%bool gesture12~%bool gesture13~%bool gesture14~%bool gesture15~%bool gesture16~%bool gesture17~%bool gesture18~%bool gesture19~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'gesture)))
  "Returns full string definition for message of type 'gesture"
  (cl:format cl:nil "bool gesture0~%bool gesture1~%bool gesture2~%bool gesture3~%bool gesture4~%bool gesture5~%bool gesture6~%bool gesture7~%bool gesture8~%bool gesture9~%bool gesture10~%bool gesture11~%bool gesture12~%bool gesture13~%bool gesture14~%bool gesture15~%bool gesture16~%bool gesture17~%bool gesture18~%bool gesture19~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <gesture>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <gesture>))
  "Converts a ROS message object to a list"
  (cl:list 'gesture
    (cl:cons ':gesture0 (gesture0 msg))
    (cl:cons ':gesture1 (gesture1 msg))
    (cl:cons ':gesture2 (gesture2 msg))
    (cl:cons ':gesture3 (gesture3 msg))
    (cl:cons ':gesture4 (gesture4 msg))
    (cl:cons ':gesture5 (gesture5 msg))
    (cl:cons ':gesture6 (gesture6 msg))
    (cl:cons ':gesture7 (gesture7 msg))
    (cl:cons ':gesture8 (gesture8 msg))
    (cl:cons ':gesture9 (gesture9 msg))
    (cl:cons ':gesture10 (gesture10 msg))
    (cl:cons ':gesture11 (gesture11 msg))
    (cl:cons ':gesture12 (gesture12 msg))
    (cl:cons ':gesture13 (gesture13 msg))
    (cl:cons ':gesture14 (gesture14 msg))
    (cl:cons ':gesture15 (gesture15 msg))
    (cl:cons ':gesture16 (gesture16 msg))
    (cl:cons ':gesture17 (gesture17 msg))
    (cl:cons ':gesture18 (gesture18 msg))
    (cl:cons ':gesture19 (gesture19 msg))
))
