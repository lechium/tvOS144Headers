/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {

	NSKeyValueGetter* _valueGetter;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
@end

