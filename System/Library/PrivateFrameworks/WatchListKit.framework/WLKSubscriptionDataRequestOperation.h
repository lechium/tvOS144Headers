/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSubscriptionDataRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * response;              //@synthesize response=_response - In the implementation block
+(id)_requestURL:(id*)arg1 ;
-(id)init;
-(NSDictionary *)response;
-(void)processResponse;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
@end
