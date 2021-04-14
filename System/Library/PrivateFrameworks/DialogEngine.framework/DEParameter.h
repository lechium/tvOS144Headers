/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEParameter : NSObject {

	shared_ptr<siri::dialogengine::Parameter>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Parameter>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
@property (retain) NSString * description; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)getSharedPtr;
@end

