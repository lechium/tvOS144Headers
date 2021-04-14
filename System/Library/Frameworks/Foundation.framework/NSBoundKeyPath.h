/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSBoundKeyPath : NSObject {

	id _rootObject;
	NSString* _keyPath;

}

@property (assign) id rootObject; 
@property (readonly) NSString * keyPath; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2 ;
+(id)keyPathWithRootObject:(id)arg1 path:(const char*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setRootObject:(id)arg1 ;
-(id)rootObject;
-(NSString *)keyPath;
-(BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2 ;
-(id)mutableArrayValue;
-(id)mutableOrderedSetValue;
-(id)mutableSetValue;
@end
