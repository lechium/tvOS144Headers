/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying> {

	NSArray* _assertions;
	NSArray* _invalidations;

}

@property (nonatomic,copy,readonly) NSArray * assertions;                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidations;              //@synthesize invalidations=_invalidations - In the implementation block
+(id)emptyResult;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)assertions;
-(NSArray *)invalidations;
-(id)resultCombiningWithResult:(id)arg1 ;
-(id)initWithAssertions:(id)arg1 invalidations:(id)arg2 ;
@end

