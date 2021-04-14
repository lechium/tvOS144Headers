/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeychainManager : NSObject
-(id)copyItemMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(id)addItem:(id)arg1 returnFlags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addOrUpdateOrReAddItem:(id)arg1 logCategory:(LogCategory*)arg2 logLabel:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeItemMatchingItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id*)arg3 ;
@end

