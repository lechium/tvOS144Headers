/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _contexts;

}
-(id)init;
-(id)allContexts;
-(void)addContext:(id)arg1 ;
-(id)allContextsNotIdenticalTo:(id)arg1 ;
@end

