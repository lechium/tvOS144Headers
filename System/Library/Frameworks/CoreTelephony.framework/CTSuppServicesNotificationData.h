/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CTSuppServicesNotificationData : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _callForwardingReason;
	NSNumber* _callClass;
	NSNumber* _enabled;
	NSNumber* _active;
	NSString* _callForwardingNumber;
	NSNumber* _callForwardingNoReplyTime;
	NSNumber* _mmiProcedure;
	NSNumber* _callBarringFacility;
	NSNumber* _supplementaryServiceType;
	NSNumber* _callingLineIdRestriction;
	NSNumber* _callingLineIdRestrictionModification;
	NSNumber* _connectedLineIdRestriction;
	NSNumber* _callingNamePresentation;
	NSNumber* _connectedLinePresentation;
	NSNumber* _callingLinePresentation;

}

@property (nonatomic,retain) NSNumber * callForwardingReason;                              //@synthesize callForwardingReason=_callForwardingReason - In the implementation block
@property (nonatomic,retain) NSNumber * callClass;                                         //@synthesize callClass=_callClass - In the implementation block
@property (nonatomic,retain) NSNumber * enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSNumber * active;                                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSString * callForwardingNumber;                              //@synthesize callForwardingNumber=_callForwardingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * callForwardingNoReplyTime;                         //@synthesize callForwardingNoReplyTime=_callForwardingNoReplyTime - In the implementation block
@property (nonatomic,retain) NSNumber * mmiProcedure;                                      //@synthesize mmiProcedure=_mmiProcedure - In the implementation block
@property (nonatomic,retain) NSNumber * callBarringFacility;                               //@synthesize callBarringFacility=_callBarringFacility - In the implementation block
@property (nonatomic,retain) NSNumber * supplementaryServiceType;                          //@synthesize supplementaryServiceType=_supplementaryServiceType - In the implementation block
@property (nonatomic,retain) NSNumber * callingLineIdRestriction;                          //@synthesize callingLineIdRestriction=_callingLineIdRestriction - In the implementation block
@property (nonatomic,retain) NSNumber * callingLineIdRestrictionModification;              //@synthesize callingLineIdRestrictionModification=_callingLineIdRestrictionModification - In the implementation block
@property (nonatomic,retain) NSNumber * connectedLineIdRestriction;                        //@synthesize connectedLineIdRestriction=_connectedLineIdRestriction - In the implementation block
@property (nonatomic,retain) NSNumber * callingNamePresentation;                           //@synthesize callingNamePresentation=_callingNamePresentation - In the implementation block
@property (nonatomic,retain) NSNumber * connectedLinePresentation;                         //@synthesize connectedLinePresentation=_connectedLinePresentation - In the implementation block
@property (nonatomic,retain) NSNumber * callingLinePresentation;                           //@synthesize callingLinePresentation=_callingLinePresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(NSNumber *)callForwardingReason;
-(NSString *)callForwardingNumber;
-(NSNumber *)callClass;
-(NSNumber *)active;
-(NSNumber *)callForwardingNoReplyTime;
-(NSNumber *)mmiProcedure;
-(NSNumber *)callBarringFacility;
-(NSNumber *)supplementaryServiceType;
-(NSNumber *)callingLineIdRestriction;
-(NSNumber *)callingLineIdRestrictionModification;
-(NSNumber *)connectedLineIdRestriction;
-(NSNumber *)callingNamePresentation;
-(NSNumber *)connectedLinePresentation;
-(NSNumber *)callingLinePresentation;
-(void)setCallForwardingReason:(NSNumber *)arg1 ;
-(void)setCallForwardingNumber:(NSString *)arg1 ;
-(void)setCallClass:(NSNumber *)arg1 ;
-(void)setCallForwardingNoReplyTime:(NSNumber *)arg1 ;
-(void)setMmiProcedure:(NSNumber *)arg1 ;
-(void)setCallBarringFacility:(NSNumber *)arg1 ;
-(void)setSupplementaryServiceType:(NSNumber *)arg1 ;
-(void)setCallingLineIdRestriction:(NSNumber *)arg1 ;
-(void)setCallingLineIdRestrictionModification:(NSNumber *)arg1 ;
-(void)setConnectedLineIdRestriction:(NSNumber *)arg1 ;
-(void)setCallingNamePresentation:(NSNumber *)arg1 ;
-(void)setConnectedLinePresentation:(NSNumber *)arg1 ;
-(void)setCallingLinePresentation:(NSNumber *)arg1 ;
@end

