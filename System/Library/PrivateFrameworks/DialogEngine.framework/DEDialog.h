/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DENode.h>

@class NSString, DESpeakableString;

@interface DEDialog : DENode {

	shared_ptr<siri::dialogengine::Dialog>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Dialog>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * id; 
@property (assign) DESpeakableString * content; 
@property (assign) DESpeakableString * caption; 
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(DESpeakableString *)content;
-(BOOL)validate:(id)arg1 ;
-(void)setContent:(DESpeakableString *)arg1 ;
-(DESpeakableString *)caption;
-(void)setCaption:(DESpeakableString *)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(shared_ptr<siri::dialogengine::Dialog>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(id)getExpandedContent:(id)arg1 ;
-(id)getExpandedCaption:(id)arg1 ;
-(BOOL)isSelectable:(id)arg1 ;
@end

