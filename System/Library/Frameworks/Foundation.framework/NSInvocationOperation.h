/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSInvocation, NSException;

@interface NSInvocationOperation : NSOperation {

	NSInvocation* _inv;
	NSException* _exception;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(id)init;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(id)initWithInvocation:(id)arg1 ;
-(NSInvocation *)invocation;
-(id)result;
@end
