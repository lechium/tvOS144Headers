/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFileCoordinationRetainedAccess.h>

@class NSString;

@interface NSFileCoordinatorAccessorBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {

	/*^block*/id block;
	Ai count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)completionWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)decrement;
-(void)increment;
@end

