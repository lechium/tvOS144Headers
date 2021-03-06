/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMFScheduler : HMFObject {

	NSOperationQueue* _operationQueue;

}
+(id)defaultScheduler;
+(id)mainScheduler;
-(id)init;
-(id)performBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)performOperation:(id)arg1 ;
-(id)performWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4 ;
@end

