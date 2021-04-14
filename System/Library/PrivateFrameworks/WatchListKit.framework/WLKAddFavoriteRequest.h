/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKRequest.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKAddFavoriteRequest : WLKRequest {

	NSString* _channelID;
	NSString* _canonicalID;
	NSString* _statsID;
	NSString* _bundleID;
	NSString* _externalID;
	WLKWatchListModificationResponse* _response;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;                              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * statsID;                                  //@synthesize statsID=_statsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                               //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) WLKWatchListModificationResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKWatchListModificationResponse *)response;
-(NSString *)bundleID;
-(NSString *)externalID;
-(NSString *)canonicalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCanonicalID:(id)arg1 ;
-(id)initWithStatsID:(id)arg1 ;
-(NSString *)statsID;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end

