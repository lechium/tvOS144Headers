/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VFX.VFXScene : NSObject {

	 entityManager;

}

@property (assign,nonatomic) BOOL isPlaying; 
@property (assign,nonatomic) BOOL allowsCameraControl; 
@property (readonly,nonatomic) NSArray * bindings; 
+(id)builtinEffectIdentifiers;
+(void)setBuiltinEffectIdentifiers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isPlaying;
-(id)initWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)restart;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)setAllowsCameraControl:(BOOL)arg1 ;
-(BOOL)allowsCameraControl;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(id)initWithContentsOf:(id)arg1 error:(id*)arg2 ;
-(id)bindingOf:(id)arg1 named:(id)arg2 ;
-(id)firstBindingWithName:(id)arg1 ;
-(NSArray *)bindings;
-(id)parameterOf:(id)arg1 named:(id)arg2 ;
-(void)setParameterOf:(id)arg1 named:(id)arg2 :(id)arg3 ;
-(void)withPointerToParameterOf:(id)arg1 named:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 atPath:(id)arg2 ;
-(id)valueAtPath:(id)arg1 ;
-(void)withPointerToValueAtPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

