/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, SSDoubleLinkedList;

@interface ISURLBagBackend : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _bagValuesDictionary;
	SSDoubleLinkedList* _bagValuesList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bagValuesDictionary;              //@synthesize bagValuesDictionary=_bagValuesDictionary - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedList * bagValuesList;                     //@synthesize bagValuesList=_bagValuesList - In the implementation block
+(BOOL)_bagValue:(id)arg1 equalsBagValue:(id)arg2 ;
-(id)description;
-(id)init;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dictionaryRepresentationForBagWithKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 forBagWithKey:(id)arg2 ;
-(void)removeBagValuesForBagWithKey:(id)arg1 ;
-(void)addBagValues:(id)arg1 forBagWithKey:(id)arg2 ;
-(NSMutableDictionary *)bagValuesDictionary;
-(id)_valueForKey:(id)arg1 forBagValuesNode:(id)arg2 ;
-(id)_bagValuesMapTableWithInitialValues:(id)arg1 ;
-(SSDoubleLinkedList *)bagValuesList;
-(id)deltaDictionaryRepresentationForBagWithKey:(id)arg1 ;
-(id)diagnostics;
-(void)setBagValuesDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBagValuesList:(SSDoubleLinkedList *)arg1 ;
@end

