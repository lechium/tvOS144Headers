/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFURLCoercion.h>

@class WFiTunesObject, NSString;

@interface WFiTunesObjectContentItem : WFContentItem <WFURLCoercion>

@property (nonatomic,readonly) WFiTunesObject * object; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)urlItem_sharingItemClassesByBundleIdentifier;
+(BOOL)urlItem_canCoerceFromURL:(id)arg1 ;
+(id)urlItem_outputClasses;
+(void)urlItem_generateObjectRepresentations:(/*^block*/id)arg1 fromURL:(id)arg2 forClass:(Class)arg3 ;
+(BOOL)parseiTunesURL:(id)arg1 itemIdentifier:(id*)arg2 countryCode:(id*)arg3 ;
+(void)urlItem_generateObjectRepresentations:(/*^block*/id)arg1 fromiTunesURL:(id)arg2 forClass:(Class)arg3 ;
-(WFiTunesObject *)object;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)possibleArtworkURLs;
-(void)getArtworkDataWithURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getArtworkForSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPreferredArtworkURL:(/*^block*/id)arg1 ;
@end

