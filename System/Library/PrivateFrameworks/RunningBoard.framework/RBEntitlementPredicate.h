/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RBEntitlementPredicate : NSObject <NSCopying> {

	unsigned long long _count;

}

@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)predicateForObject:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)allEntitlements;
-(BOOL)matchesEntitlements:(id)arg1 ;
@end

