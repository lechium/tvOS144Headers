/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary, WLKURLRequestProperties;

@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _responseDictionary;
	BOOL _didHandleInvalidConfig;
	WLKURLRequestProperties* _requestProperties;
	unsigned long long _environmentHash;

}

@property (assign,nonatomic) unsigned long long environmentHash;                       //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,retain) WLKURLRequestProperties * requestProperties;              //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign) BOOL didHandleInvalidConfig;                                        //@synthesize didHandleInvalidConfig=_didHandleInvalidConfig - In the implementation block
-(id)init;
-(id)shortDescription;
-(void)setRequestProperties:(WLKURLRequestProperties *)arg1 ;
-(id)responseDictionary;
-(WLKURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)processResponse;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(unsigned long long)environmentHash;
-(void)handleResult:(id)arg1 error:(id)arg2 ;
-(void)setEnvironmentHash:(unsigned long long)arg1 ;
-(BOOL)didHandleInvalidConfig;
-(void)setDidHandleInvalidConfig:(BOOL)arg1 ;
@end

