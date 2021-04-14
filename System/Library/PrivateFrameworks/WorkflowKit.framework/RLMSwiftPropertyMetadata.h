/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface RLMSwiftPropertyMetadata : NSObject {

	int _propertyType;
	NSString* _propertyName;
	NSString* _className;
	NSString* _linkedPropertyName;
	unsigned long long _kind;

}

@property (nonatomic,retain) NSString * propertyName;                    //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,retain) NSString * className;                       //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * linkedPropertyName;              //@synthesize linkedPropertyName=_linkedPropertyName - In the implementation block
@property (assign,nonatomic) int propertyType;                           //@synthesize propertyType=_propertyType - In the implementation block
@property (assign,nonatomic) unsigned long long kind;                    //@synthesize kind=_kind - In the implementation block
+(id)metadataForOtherProperty:(id)arg1 ;
+(id)metadataForListProperty:(id)arg1 ;
+(id)metadataForLinkingObjectsProperty:(id)arg1 className:(id)arg2 linkedPropertyName:(id)arg3 ;
+(id)metadataForOptionalProperty:(id)arg1 type:(int)arg2 ;
+(id)metadataForNilLiteralOptionalProperty:(id)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(NSString *)className;
-(int)propertyType;
-(NSString *)propertyName;
-(void)setPropertyName:(NSString *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(void)setPropertyType:(int)arg1 ;
-(void)setLinkedPropertyName:(NSString *)arg1 ;
-(NSString *)linkedPropertyName;
@end

