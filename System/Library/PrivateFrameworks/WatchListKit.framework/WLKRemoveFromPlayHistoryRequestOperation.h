/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _deleteID;

}

@property (nonatomic,copy,readonly) NSString * deleteID;              //@synthesize deleteID=_deleteID - In the implementation block
-(id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(BOOL)arg3 ;
-(NSString *)deleteID;
@end

