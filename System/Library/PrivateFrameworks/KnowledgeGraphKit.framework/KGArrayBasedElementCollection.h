/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KGElementCollection.h>

@class NSArray;

@interface KGArrayBasedElementCollection : KGElementCollection {

	NSArray* _elements;

}

@property (readonly) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(NSArray *)elements;
-(id)initWithElements:(id)arg1 ;
@end

