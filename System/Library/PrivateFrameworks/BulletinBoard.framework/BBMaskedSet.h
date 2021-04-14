/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface BBMaskedSet : NSObject {

	unsigned long long _maskBits;
	NSMutableArray* _maskObjectSets;

}

@property (nonatomic,retain) NSMutableArray * maskObjectSets;              //@synthesize maskObjectSets=_maskObjectSets - In the implementation block
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithMaskBits:(unsigned long long)arg1 ;
-(id)objectsForMask:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 withMask:(unsigned long long)arg2 ;
-(void)setMaskObjectSets:(NSMutableArray *)arg1 ;
-(void)_executeUsingMask:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableArray *)maskObjectSets;
@end
