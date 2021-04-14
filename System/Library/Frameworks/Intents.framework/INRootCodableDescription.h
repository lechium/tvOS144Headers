/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INCodableDescription.h>

@class NSDictionary, NSArray;

@interface INRootCodableDescription : INCodableDescription {

	NSDictionary* _referencedCodableDescriptionsByClassName;
	NSArray* _referencedCodableDescriptions;

}

@property (setter=_setReferencedCodableDescriptions:,nonatomic,retain) NSArray * referencedCodableDescriptions;              //@synthesize referencedCodableDescriptions=_referencedCodableDescriptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * _referencedCodableDescriptionsByClassName;                                     //@synthesize referencedCodableDescriptionsByClassName=_referencedCodableDescriptionsByClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)_referencedCodableDescriptionsByClassName;
-(void)_setReferencedCodableDescriptions:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 ;
-(NSArray *)referencedCodableDescriptions;
@end

