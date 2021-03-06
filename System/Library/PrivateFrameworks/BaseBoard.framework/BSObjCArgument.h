/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray;

@interface BSObjCArgument : NSObject <BSDescriptionProviding> {

	NSString* _encoding;
	unsigned long long _size;
	char _type;
	BOOL _onewayVoid;
	BOOL _plistObject;
	Class _objectClass;
	NSString* _structName;
	NSArray* _protocols;
	NSArray* _containedClasses;
	NSString* _name;
	long long _index;

}

@property (nonatomic,copy,readonly) NSString * encoding; 
@property (nonatomic,readonly) char type; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) long long index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * structName;                         //@synthesize structName=_structName - In the implementation block
@property (nonatomic,retain,readonly) Class objectClass;                           //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSArray * protocols;                           //@synthesize protocols=_protocols - In the implementation block
@property (nonatomic,retain,readonly) NSArray * containedClasses;                  //@synthesize containedClasses=_containedClasses - In the implementation block
@property (getter=isObject,nonatomic,readonly) BOOL object; 
@property (getter=isXPCObject,nonatomic,readonly) BOOL xpcObject; 
@property (getter=isBlock,nonatomic,readonly) BOOL block; 
@property (getter=isPointer,nonatomic,readonly) BOOL pointer; 
@property (getter=isBoolean,nonatomic,readonly) BOOL boolean; 
@property (getter=isVoid,nonatomic,readonly) BOOL isVoid; 
@property (getter=isOnewayVoid,nonatomic,readonly) BOOL onewayVoid;                //@synthesize onewayVoid=_onewayVoid - In the implementation block
@property (getter=isPlistObject,nonatomic,readonly) BOOL plistObject;              //@synthesize plistObject=_plistObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)size;
-(char)type;
-(long long)index;
-(BOOL)isObject;
-(NSString *)encoding;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_prettyTypeString;
-(BOOL)isBlock;
-(BOOL)isXPCObject;
-(BOOL)isBoolean;
-(BOOL)isVoid;
-(BOOL)isPointer;
-(Class)objectClass;
-(NSString *)structName;
-(NSArray *)protocols;
-(NSArray *)containedClasses;
-(BOOL)isOnewayVoid;
-(BOOL)isPlistObject;
@end

