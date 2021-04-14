/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVMotionEffectComponent.h>
#import <libobjc.A.dylib/PVEffectTextual.h>

@class NSArray, PVMotionEffect, PVMotionEffectTransformComponent;

@interface PVMotionEffectTextComponent : NSObject <PVMotionEffectComponent, PVEffectTextual> {

	vector<unsigned int, std::__1::allocator<unsigned int> >* _textObjectIDs;
	NSArray* _defaultAttributedStrings;
	PVMotionEffect* _motionEffect;
	PVMotionEffectTransformComponent* _transformComponent;

}

@property (assign,nonatomic,__weak) PVMotionEffect * motionEffect;                                      //@synthesize motionEffect=_motionEffect - In the implementation block
@property (assign,nonatomic,__weak) PVMotionEffectTransformComponent * transformComponent;              //@synthesize transformComponent=_transformComponent - In the implementation block
+(id)parameterKeyToPublishedParameterNameMap;
-(void)dealloc;
-(int)orientation;
-(id)textEditingBoundsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 useParagraphBounds:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(id)textEditingBounds:(SCD_Struct_PV21)arg1 ;
-(id)textTransformsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(PVCGPointQuad)textCornersAtTime:(SCD_Struct_PV21)arg1 index:(unsigned long long)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 scale:(CGPoint)arg5 viewSize:(CGSize)arg6 viewOrigin:(int)arg7 ;
-(void)beginTextEditing;
-(void)endTextEditing;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(BOOL)isTextFlipped;
-(void)setMotionEffect:(PVMotionEffect *)arg1 ;
-(void)didLoad:(BOOL)arg1 ;
-(void)didUnload;
-(void)updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)documentDidStartLoading;
-(void)documentDidLoad:(const PVMotionDocumentInfo*)arg1 ;
-(void)documentWillOpenMedia:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentDidBecomeReady:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentWillRender:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 time:(SCD_Struct_PV21)arg3 ;
-(void)documentDidFailToLoad;
-(void)documentDidUnload;
-(BOOL)propertiesDisableCache:(id)arg1 time:(SCD_Struct_PV21)arg2 isAtPosterFrame:(BOOL)arg3 ;
-(id)parameterKeysThatInvalidateCache;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 parameterA:(id)arg2 parameterB:(id)arg3 ;
-(PVMotionEffect *)motionEffect;
-(void)setTransformComponent:(PVMotionEffectTransformComponent *)arg1 ;
-(vector<unsigned int, std::__1::allocator<unsigned int> >*)_textObjectIDs:(const PVMotionDocumentInfo*)arg1 ;
-(PVMotionEffectTransformComponent *)transformComponent;
-(void)disableRenderingTextObjectAtIndex:(unsigned)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(void)enableRenderingTextObjectAtIndex:(unsigned)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(BOOL)hasEmojiRenderingWorkaround;
-(void)setIsRightToLeft_NoLock:(BOOL)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(void)setupTitleParameters:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(void)storeDefaultStrings:(const PVMotionDocumentInfo*)arg1 ;
-(BOOL)isRightToLeftWithCurrentLocale;
-(id)initWithEffect:(id)arg1 transformComponent:(id)arg2 ;
@end

