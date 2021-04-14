/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface TUMomentsProvider : NSObject {

	BOOL _remoteMomentsAvailable;
	long long _streamToken;
	NSString* _requesterID;
	NSDictionary* _remoteIDSDestinations;

}

@property (nonatomic,readonly) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesterID;                                              //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * remoteIDSDestinations;                                //@synthesize remoteIDSDestinations=_remoteIDSDestinations - In the implementation block
@property (getter=isRemoteMomentsAvailable,nonatomic,readonly) BOOL remoteMomentsAvailable;              //@synthesize remoteMomentsAvailable=_remoteMomentsAvailable - In the implementation block
-(long long)streamToken;
-(NSString *)requesterID;
-(NSDictionary *)remoteIDSDestinations;
-(BOOL)isRemoteMomentsAvailable;
-(id)initWithCall:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)isEqualToProvider:(id)arg1 ;
@end

