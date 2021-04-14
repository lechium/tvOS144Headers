/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, RLMRealm;


@protocol RLMCollection <NSFastEnumeration,RLMThreadConfined>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,copy,readonly) NSString * objectClassName; 
@property (nonatomic,readonly) RLMRealm * realm; 
@required
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfObject:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)firstObject;
-(id)lastObject;
-(int)type;
-(RLMRealm *)realm;
-(id)valueForKey:(id)arg1;
-(BOOL)isOptional;
-(NSString *)objectClassName;
-(id)objectsWhere:(id)arg1 args:(char*)arg2;
-(id)objectsWithPredicate:(id)arg1;
-(id)objectsWhere:(id)arg1;
-(id)addNotificationBlock:(/*^block*/id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1;
-(id)averageOfProperty:(id)arg1;
-(id)sortedResultsUsingDescriptors:(id)arg1;
-(unsigned long long)indexOfObjectWhere:(id)arg1;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2;
-(id)minOfProperty:(id)arg1;
-(id)maxOfProperty:(id)arg1;
-(id)sumOfProperty:(id)arg1;

@end

