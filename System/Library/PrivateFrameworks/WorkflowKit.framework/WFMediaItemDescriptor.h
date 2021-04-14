/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	NSString* _itemName;
	NSNumber* _persistentIdentifier;
	NSData* _playbackArchiveData;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackArchiveData;                 //@synthesize playbackArchiveData=_playbackArchiveData - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)playbackArchiveDataJSONTransformer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSNumber *)persistentIdentifier;
-(NSString *)itemName;
-(NSData *)playbackArchiveData;
-(id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3 ;
-(id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2 ;
@end

