/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest {

	BOOL _allowAuthentication;
	WLKContinueWatchingResponse* _response;

}

@property (assign,nonatomic) BOOL allowAuthentication;                              //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(WLKContinueWatchingResponse *)response;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowAuthentication;
-(void)setAllowAuthentication:(BOOL)arg1 ;
@end

