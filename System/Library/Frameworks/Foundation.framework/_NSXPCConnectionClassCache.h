/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableSet* _cache;

}
-(id)init;
-(void)dealloc;
@end

