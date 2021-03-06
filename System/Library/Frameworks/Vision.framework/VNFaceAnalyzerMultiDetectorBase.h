/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {

	shared_ptr<vision::mod::FaceprintAndAttributes>* _mMultiHeadedFaceClassifier;

}
+(id)configurationOptionKeysForDetectorKey;
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
+(unsigned long long)numberOfImageChannels;
+(const basic_string_view<char, std::__1::char_traits<char> >*)getModelVersionForOptions:(id)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(void)_addFaceAnalysisResultsFromMap:(map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3 ;
-(BOOL)_saveFaceprint:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_isFaceprintJunk:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 ;
-(BOOL)_saveFaceAttributes:(map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

