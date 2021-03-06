/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSValue;

@interface WFCloudKitItemProperty : NSObject {

	BOOL _ignoredByDefault;
	unsigned long long _type;
	NSString* _name;
	Class _itemClass;
	NSValue* _nilValue;

}

@property (nonatomic,readonly) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Class itemClass;                                              //@synthesize itemClass=_itemClass - In the implementation block
@property (getter=isIgnoredByDefault,nonatomic,readonly) BOOL ignoredByDefault;              //@synthesize ignoredByDefault=_ignoredByDefault - In the implementation block
@property (nonatomic,readonly) NSValue * nilValue;                                           //@synthesize nilValue=_nilValue - In the implementation block
+(id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ;
+(id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ignoredByDefault:(BOOL)arg3 ;
+(id)objectPropertyWithName:(id)arg1 ;
+(id)objectPropertyWithName:(id)arg1 ignoredByDefault:(BOOL)arg2 ;
+(id)assetPropertyWithName:(id)arg1 ;
+(id)assetPropertyWithName:(id)arg1 ignoredByDefault:(BOOL)arg2 ;
+(id)itemReferencePropertyWithName:(id)arg1 itemClass:(Class)arg2 ;
+(id)itemPropertyWithName:(id)arg1 itemClass:(Class)arg2 ;
-(NSString *)name;
-(unsigned long long)type;
-(NSValue *)nilValue;
-(Class)itemClass;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 itemClass:(Class)arg3 ignoredByDefault:(BOOL)arg4 nilValue:(id)arg5 ;
-(BOOL)isIgnoredByDefault;
@end

