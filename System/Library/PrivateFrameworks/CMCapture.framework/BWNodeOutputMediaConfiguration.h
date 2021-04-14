/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BWFormatRequirements, NSArray;

@interface BWNodeOutputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	NSArray* _indexesOfInputsWhichDrivesThisOutput;
	NSString* _attachedMediaKeyOfInputWhichDrivesThisOutput;
	int _passthroughMode;
	int _indexOfInputWhichDrivesThisOutput;
	int _owningNodeRetainedBufferCount;
	BOOL _providesPixelBufferPool;
	BOOL _providesDataBufferPool;
	BOOL _pixelBufferPoolProvidesBackPressure;
	BOOL _performsAttachedMediaRemapping;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;                          //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) BOOL providesPixelBufferPool;                                       //@synthesize providesPixelBufferPool=_providesPixelBufferPool - In the implementation block
@property (assign,nonatomic) BOOL providesDataBufferPool;                                        //@synthesize providesDataBufferPool=_providesDataBufferPool - In the implementation block
@property (assign,nonatomic) BOOL pixelBufferPoolProvidesBackPressure;                           //@synthesize pixelBufferPoolProvidesBackPressure=_pixelBufferPoolProvidesBackPressure - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                                //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput; 
@property (nonatomic,copy) NSArray * indexesOfInputsWhichDrivesThisOutput; 
@property (nonatomic,readonly) BOOL performsAttachedMediaRemapping; 
@property (nonatomic,copy) NSString * attachedMediaKeyOfInputWhichDrivesThisOutput; 
@property (assign,nonatomic) int owningNodeRetainedBufferCount;                                  //@synthesize owningNodeRetainedBufferCount=_owningNodeRetainedBufferCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setPassthroughMode:(int)arg1 ;
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(void)setAttachedMediaKeyOfInputWhichDrivesThisOutput:(NSString *)arg1 ;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(int)passthroughMode;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(void)setIndexesOfInputsWhichDrivesThisOutput:(NSArray *)arg1 ;
-(void)setProvidesDataBufferPool:(BOOL)arg1 ;
-(BOOL)providesPixelBufferPool;
-(BOOL)providesDataBufferPool;
-(int)owningNodeRetainedBufferCount;
-(BOOL)pixelBufferPoolProvidesBackPressure;
-(BOOL)isDrivenByInputWithIndex:(unsigned long long)arg1 ;
-(BOOL)performsAttachedMediaRemapping;
-(NSString *)attachedMediaKeyOfInputWhichDrivesThisOutput;
-(int)indexOfInputWhichDrivesThisOutput;
-(NSArray *)indexesOfInputsWhichDrivesThisOutput;
-(void)setPixelBufferPoolProvidesBackPressure:(BOOL)arg1 ;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
@end

