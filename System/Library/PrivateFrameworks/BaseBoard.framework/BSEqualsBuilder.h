/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSEqualsBuilder : NSObject {

	BOOL _equal;

}
+(id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2 ;
+(id)builder;
-(id)init;
-(id)appendCGFloat:(double)arg1 counterpart:(/*^block*/id)arg2 ;
-(BOOL)isEqual;
-(id)appendEqualsBlocks:(/*^block*/id)arg1 ;
-(id)appendBool:(BOOL)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendInteger:(long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendSizeT:(unsigned long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendFloat:(float)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendDouble:(double)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGPoint:(CGPoint)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGSize:(CGSize)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGRect:(CGRect)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendClass:(Class)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendObject:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendPointer:(void*)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendString:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendArray:(id)arg1 counterpart:(/*^block*/id)arg2 ;
@end
