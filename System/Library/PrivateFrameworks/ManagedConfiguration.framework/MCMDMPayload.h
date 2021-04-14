/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSData, NSArray, NSNumber;

@interface MCMDMPayload : MCPayload {

	BOOL _useDevelopmentAPNS;
	BOOL _pinningRevocationCheckRequired;
	BOOL _signMessage;
	BOOL _checkOutWhenRemoved;
	int _accessRights;
	NSString* _identityUUID;
	NSData* _identityPersistentID;
	NSString* _topic;
	NSString* _serverURLString;
	NSArray* _serverPinningUUIDs;
	NSArray* _serverPinningPersistentRefs;
	NSString* _checkInURLString;
	NSArray* _checkInPinningUUIDs;
	NSArray* _checkInPinningPersistentRefs;
	NSArray* _serverCapabilities;
	NSString* _managedAppleID;
	NSString* _personaID;
	NSString* _enrollmentID;
	NSString* _iCloudEnrollmentID;
	NSString* _easEnrollmentID;
	NSNumber* _useDevelopmentAPNSNum;
	NSNumber* _signMessageNum;
	NSNumber* _checkOutWhenRemovedNum;

}

@property (nonatomic,readonly) NSNumber * useDevelopmentAPNSNum;                               //@synthesize useDevelopmentAPNSNum=_useDevelopmentAPNSNum - In the implementation block
@property (nonatomic,readonly) NSNumber * signMessageNum;                                      //@synthesize signMessageNum=_signMessageNum - In the implementation block
@property (nonatomic,readonly) NSNumber * checkOutWhenRemovedNum;                              //@synthesize checkOutWhenRemovedNum=_checkOutWhenRemovedNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * identityUUID;                                 //@synthesize identityUUID=_identityUUID - In the implementation block
@property (nonatomic,retain) NSData * identityPersistentID;                                    //@synthesize identityPersistentID=_identityPersistentID - In the implementation block
@property (nonatomic,retain,readonly) NSString * topic;                                        //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain,readonly) NSString * serverURLString;                              //@synthesize serverURLString=_serverURLString - In the implementation block
@property (nonatomic,retain,readonly) NSArray * serverPinningUUIDs;                            //@synthesize serverPinningUUIDs=_serverPinningUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * serverPinningPersistentRefs;                            //@synthesize serverPinningPersistentRefs=_serverPinningPersistentRefs - In the implementation block
@property (nonatomic,readonly) BOOL useDevelopmentAPNS;                                        //@synthesize useDevelopmentAPNS=_useDevelopmentAPNS - In the implementation block
@property (nonatomic,retain,readonly) NSString * checkInURLString;                             //@synthesize checkInURLString=_checkInURLString - In the implementation block
@property (nonatomic,retain,readonly) NSArray * checkInPinningUUIDs;                           //@synthesize checkInPinningUUIDs=_checkInPinningUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * checkInPinningPersistentRefs;                           //@synthesize checkInPinningPersistentRefs=_checkInPinningPersistentRefs - In the implementation block
@property (nonatomic,readonly) BOOL pinningRevocationCheckRequired;                            //@synthesize pinningRevocationCheckRequired=_pinningRevocationCheckRequired - In the implementation block
@property (nonatomic,readonly) int accessRights;                                               //@synthesize accessRights=_accessRights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * localizedAccessRightDescriptions; 
@property (nonatomic,readonly) BOOL signMessage;                                               //@synthesize signMessage=_signMessage - In the implementation block
@property (nonatomic,readonly) BOOL checkOutWhenRemoved;                                       //@synthesize checkOutWhenRemoved=_checkOutWhenRemoved - In the implementation block
@property (nonatomic,readonly) NSArray * serverCapabilities;                                   //@synthesize serverCapabilities=_serverCapabilities - In the implementation block
@property (nonatomic,retain,readonly) NSString * managedAppleID;                               //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (nonatomic,retain,readonly) NSString * managedAppleIDName; 
@property (nonatomic,readonly) BOOL isUserEnrollment; 
@property (nonatomic,retain) NSString * personaID;                                             //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,retain) NSString * enrollmentID;                                          //@synthesize enrollmentID=_enrollmentID - In the implementation block
@property (nonatomic,retain) NSString * iCloudEnrollmentID;                                    //@synthesize iCloudEnrollmentID=_iCloudEnrollmentID - In the implementation block
@property (nonatomic,retain) NSString * easEnrollmentID;                                       //@synthesize easEnrollmentID=_easEnrollmentID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(BOOL)isUserEnrollment;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)_invalidRightsError;
-(id)_invalidTopicError;
-(id)_nonHTTPSURLErrorForField:(id)arg1 ;
-(NSString *)managedAppleIDName;
-(NSArray *)localizedAccessRightDescriptions;
-(id)kvsForCertUUIDs:(id)arg1 persistentRefs:(id)arg2 labelKey:(id)arg3 ;
-(NSString *)identityUUID;
-(NSData *)identityPersistentID;
-(void)setIdentityPersistentID:(NSData *)arg1 ;
-(NSString *)topic;
-(NSString *)serverURLString;
-(NSArray *)serverPinningUUIDs;
-(NSArray *)serverPinningPersistentRefs;
-(void)setServerPinningPersistentRefs:(NSArray *)arg1 ;
-(BOOL)useDevelopmentAPNS;
-(NSString *)checkInURLString;
-(NSArray *)checkInPinningUUIDs;
-(NSArray *)checkInPinningPersistentRefs;
-(void)setCheckInPinningPersistentRefs:(NSArray *)arg1 ;
-(BOOL)pinningRevocationCheckRequired;
-(int)accessRights;
-(BOOL)signMessage;
-(BOOL)checkOutWhenRemoved;
-(NSArray *)serverCapabilities;
-(NSString *)managedAppleID;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(NSString *)enrollmentID;
-(void)setEnrollmentID:(NSString *)arg1 ;
-(NSString *)iCloudEnrollmentID;
-(void)setICloudEnrollmentID:(NSString *)arg1 ;
-(NSString *)easEnrollmentID;
-(void)setEasEnrollmentID:(NSString *)arg1 ;
-(NSNumber *)useDevelopmentAPNSNum;
-(NSNumber *)signMessageNum;
-(NSNumber *)checkOutWhenRemovedNum;
@end

