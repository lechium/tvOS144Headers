/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation {

	NSDictionary* _query;
	WLKSearchWatchListResponse* _response;

}

@property (nonatomic,copy,readonly) NSDictionary * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) WLKSearchWatchListResponse * response;              //@synthesize response=_response - In the implementation block
-(NSDictionary *)query;
-(WLKSearchWatchListResponse *)response;
-(void)processResponse;
-(id)initWithQuery:(id)arg1 caller:(id)arg2 ;
@end

