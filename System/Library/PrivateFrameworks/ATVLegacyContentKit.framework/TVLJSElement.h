/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSNode.h>

@class TVLXMLSchema, TVLXMLElement;

@interface TVLJSElement : TVLJSNode {

	TVLXMLSchema* xmlSchema;

}

@property (nonatomic,retain) TVLXMLSchema * xmlSchema; 
@property (nonatomic,retain,readonly) TVLXMLElement * xmlElement; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)elementInContext:(OpaqueJSContextRef)arg1 withElement:(id)arg2 withSchema:(id)arg3 ;
+(id)elementFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(void)dealloc;
-(void)setXmlSchema:(TVLXMLSchema *)arg1 ;
-(TVLXMLElement *)xmlElement;
-(TVLXMLSchema *)xmlSchema;
@end

