/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _itemID;
	NSString* _brandID;

}

@property (nonatomic,copy,readonly) NSString * itemID;               //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * brandID;              //@synthesize brandID=_brandID - In the implementation block
-(NSString *)itemID;
-(NSString *)brandID;
-(id)initWithItemID:(id)arg1 itemType:(id)arg2 brandID:(id)arg3 caller:(id)arg4 ;
@end

