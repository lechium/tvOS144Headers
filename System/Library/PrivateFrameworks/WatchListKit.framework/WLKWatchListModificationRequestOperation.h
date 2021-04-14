/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation {

	unsigned long long _action;
	NSString* _itemID;
	WLKWatchListModificationResponse* _response;

}

@property (nonatomic,readonly) unsigned long long action;                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) WLKWatchListModificationResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKWatchListModificationResponse *)response;
-(NSString *)itemID;
-(unsigned long long)action;
-(void)processResponse;
-(id)initWithAction:(unsigned long long)arg1 identifier:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4 ;
@end
