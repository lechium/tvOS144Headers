/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXGadgetRankStorage.h>

@class NSString;

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage> {

	NSString* _prefix;

}
+(id)rankableGadgetTypes;
+(id)defaultStorage;
+(id)customStorage;
-(id)init;
-(long long)rankForGadgetType:(unsigned long long)arg1 ;
-(unsigned long long)gadgetTypeForRank:(long long)arg1 ;
-(void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2 ;
-(void)resetStoredRanks;
-(BOOL)hasAnyStoredRank;
-(id)_initWithPrefix:(id)arg1 ;
-(id)_keyForGadgetType:(unsigned long long)arg1 ;
@end
