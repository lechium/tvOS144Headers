/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGCurationTrait.h>

@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait {

	NSSet* _items;
	NSSet* _negativeItems;

}

@property (nonatomic,readonly) NSSet * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSSet * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(NSSet *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSSet *)negativeItems;
@end
