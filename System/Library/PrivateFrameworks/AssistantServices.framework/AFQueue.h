/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol AFQueueDelegate;
@class AFLinkedListItem;

@interface AFQueue : NSObject <NSFastEnumeration> {

	AFLinkedListItem* _head;
	AFLinkedListItem* _tail;
	unsigned long long _count;
	id<AFQueueDelegate> _delegate;

}

@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic,__weak) id<AFQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)_objects;
-(id<AFQueueDelegate>)delegate;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(void)enqueueObjects:(id)arg1 ;
-(id)frontObject;
-(id)dequeueAllObjects;
@end

