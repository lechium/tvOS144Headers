/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface MPBaseEntityTranslator : NSObject {

	NSMutableDictionary* _propertiesToTranslators;
	NSMutableDictionary* _relationshipsToTranslators;
	/*^block*/id _sourcePreprocessorBlock;
	NSMutableSet* _unsupportedKeys;
	SCD_Struct_MP48 _optionalHooks;
	Class _MPModelClass;

}

@property (nonatomic,readonly) Class MPModelClass;              //@synthesize MPModelClass=_MPModelClass - In the implementation block
+(void)buildSchemaIfNeeded;
+(id)translatorForMPModelClass:(Class)arg1 ;
+(id)createTranslatorForMPModelClass:(Class)arg1 ;
-(id)description;
-(id)initWithMPModelClass:(Class)arg1 ;
-(Class)classForRelationshipKey:(id)arg1 ;
-(id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3 ;
-(void)setSourcePreprocessorBlock:(/*^block*/id)arg1 ;
-(void)mapUnsupportedPropertyKey:(id)arg1 ;
-(void)mapUnsupportedRelationshipKey:(id)arg1 ;
-(id)_objectForPropertySet:(id)arg1 source:(id)arg2 context:(id)arg3 ;
-(id)_objectForRelationshipKey:(id)arg1 propertySet:(id)arg2 source:(id)arg3 context:(id)arg4 ;
-(id)_valueForPropertyKey:(id)arg1 source:(id)arg2 context:(id)arg3 ;
-(Class)MPModelClass;
@end

