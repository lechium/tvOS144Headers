/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(id)init;
-(void)removeItemFromCache:(id)arg1 ;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
@end

