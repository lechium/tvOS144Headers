/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSString, NSData;

@interface IDSGroupSessionActiveParticipant : NSObject {

	NSUUID* _groupUUID;
	unsigned long long _participantIdentifier;
	NSString* _participantURI;
	BOOL _isKnown;
	NSData* _participantPushToken;

}

@property (nonatomic,readonly) NSUUID * groupUUID;                                    //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isKnown;                                          //@synthesize isKnown=_isKnown - In the implementation block
@property (nonatomic,readonly) NSString * participantURI;                             //@synthesize participantURI=_participantURI - In the implementation block
@property (nonatomic,readonly) NSData * participantPushToken;                         //@synthesize participantPushToken=_participantPushToken - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSUUID *)groupUUID;
-(unsigned long long)participantIdentifier;
-(id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(BOOL)arg3 participantURI:(id)arg4 pushToken:(id)arg5 ;
-(NSString *)participantURI;
-(BOOL)isKnown;
-(NSData *)participantPushToken;
@end

