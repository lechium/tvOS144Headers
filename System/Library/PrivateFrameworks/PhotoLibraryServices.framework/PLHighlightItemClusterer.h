/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLHighlightItemClustererRule;
@interface PLHighlightItemClusterer : NSObject {

	id<PLHighlightItemClustererRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemClustererRule> rule;              //@synthesize rule=_rule - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(id<PLHighlightItemClustererRule>)rule;
-(void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(/*^block*/id)arg4 restoreBlock:(/*^block*/id)arg5 ;
-(id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

