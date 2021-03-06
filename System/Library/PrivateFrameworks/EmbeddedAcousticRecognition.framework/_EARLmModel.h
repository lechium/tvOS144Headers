/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmModel : NSObject {

	shared_ptr<quasar::LmModel>* _model;

}

@property (nonatomic,readonly) shared_ptr<quasar::LmModel>* model;              //@synthesize model=_model - In the implementation block
+(void)initialize;
+(void)removeWithDirectory:(id)arg1 ;
-(id)handle;
-(id)initWithConfiguration:(id)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(shared_ptr<quasar::LmModel>*)model;
-(id)metrics;
-(double)age;
-(id)initWithConfiguration:(id)arg1 root:(id)arg2 ;
-(BOOL)trainWithData:(id)arg1 ;
-(id)_initWithModel:(shared_ptr<quasar::LmModel>*)arg1 ;
-(id)initFromDirectory:(id)arg1 ;
-(BOOL)trainWithData:(id)arg1 shouldStop:(/*^block*/id)arg2 ;
-(BOOL)writeToDirectory:(id)arg1 ;
@end

