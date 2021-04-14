/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString, NSData;

@interface CKDSharePCSData : CKDPCSData <NSSecureCoding, NSCopying> {

	CKRecordID* _shareID;
	unsigned long long _serviceType;
	NSString* _shareEtag;
	long long _publicPermission;
	long long _myParticipantRole;
	long long _myParticipantPermission;
	OpaquePCSShareProtectionRef _myParticipantPCS;
	NSData* _myParticipantPCSData;
	OpaquePCSShareProtectionRef _preKeyRollInvitedPCS;
	OpaquePCSShareProtectionRef _publicPCS;
	NSString* _publicPCSEtag;
	NSData* _publicPCSData;

}

@property (nonatomic,retain) CKRecordID * shareID;                                          //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) unsigned long long serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * shareEtag;                                          //@synthesize shareEtag=_shareEtag - In the implementation block
@property (assign,nonatomic) long long publicPermission;                                    //@synthesize publicPermission=_publicPermission - In the implementation block
@property (assign,nonatomic) long long myParticipantRole;                                   //@synthesize myParticipantRole=_myParticipantRole - In the implementation block
@property (assign,nonatomic) long long myParticipantPermission;                             //@synthesize myParticipantPermission=_myParticipantPermission - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef myParticipantPCS;                  //@synthesize myParticipantPCS=_myParticipantPCS - In the implementation block
@property (nonatomic,copy) NSData * myParticipantPCSData;                                   //@synthesize myParticipantPCSData=_myParticipantPCSData - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef invitedPCS; 
@property (assign,nonatomic) OpaquePCSShareProtectionRef preKeyRollInvitedPCS;              //@synthesize preKeyRollInvitedPCS=_preKeyRollInvitedPCS - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef publicPCS;                         //@synthesize publicPCS=_publicPCS - In the implementation block
@property (nonatomic,copy) NSString * publicPCSEtag;                                        //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,copy) NSData * publicPCSData;                                          //@synthesize publicPCSData=_publicPCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithShare:(id)arg1 serviceType:(unsigned long long)arg2 ;
+(id)dataWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)serviceType;
-(void)setServiceType:(unsigned long long)arg1 ;
-(id)CKPropertiesDescription;
-(NSString *)shareEtag;
-(void)setShareEtag:(NSString *)arg1 ;
-(long long)publicPermission;
-(void)setPublicPermission:(long long)arg1 ;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(OpaquePCSShareProtectionRef)invitedPCS;
-(OpaquePCSShareProtectionRef)publicPCS;
-(void)setPreKeyRollInvitedPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setInvitedPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setPublicPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)preKeyRollInvitedPCS;
-(NSData *)myParticipantPCSData;
-(void)setMyParticipantPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)myParticipantPCS;
-(NSData *)publicPCSData;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(void)setMyParticipantPCSData:(NSData *)arg1 ;
-(NSString *)publicPCSEtag;
-(id)initWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(void)setMyParticipantPermission:(long long)arg1 ;
-(void)setMyParticipantRole:(long long)arg1 ;
-(long long)myParticipantPermission;
-(long long)myParticipantRole;
@end

