/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSArray.h>

@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {

	unsigned long long _count;
	unsigned long long _firstSequenceNumber;
	NSMutableDictionary* _cachedFragments;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 firstSequenceNumber:(unsigned long long)arg2 ;
@end

