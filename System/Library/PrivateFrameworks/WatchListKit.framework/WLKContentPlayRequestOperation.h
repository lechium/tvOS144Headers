/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _canonicalID;
	WLKContentPlayResponse* _response;

}

@property (nonatomic,retain) WLKContentPlayResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                  //@synthesize canonicalID=_canonicalID - In the implementation block
-(void)setResponse:(WLKContentPlayResponse *)arg1 ;
-(WLKContentPlayResponse *)response;
-(void)processResponse;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 caller:(id)arg2 ;
@end

